import QtQuick 2.0

Rectangle {
    id: buttonRoot
    implicitWidth: 60
    implicitHeight: 60
    color: "transparent"
    border.width: 0


    // Button Text
    property alias text: text.text
    property string fontFamily: "Century Gothic"
    property bool fontBold: true
    property int fontPixelSize: 16
    property color fontColor: "#ffffff"
    property color flatFontColor: "#000000"

    // Icons
    property string icon: ""
    property string flatIcon: ""

    // Flat Colors
    property color flatColor: "#ffffff"
    property color flatDownColor: "#d0d0d0"
    property color flatEdgeColor: "#000000"

    // Skin  (ex: "qrc:images/metalbutton" to use qrc:images/metalbutton_up.png and qrc:images/metalbutton_down.png )
    default property string skin: "./button"

    // Corner Radii
    property int flatRadius: 5
    property int skinCornerRadius: 28
    property int skinCornerBottomOffset: 14
    property real cornerRadius: 10

    // Button signals and states
    property alias isPressed: maButton.pressed
    signal clicked()
    signal pressed()
    signal released()

    states: [
        State {
            name: "FLAT"
            PropertyChanges {
                target: buttonRoot
                border.color: buttonRoot.flatEdgeColor
                border.width: 1
                radius: buttonRoot.flatRadius
                color: maButton.pressed ? buttonRoot.flatDownColor : buttonRoot.flatColor
            }
            PropertyChanges {
                target: backgroundImage
                visible: false
            }
            PropertyChanges {
                target: iconImage
                visible: buttonRoot.flatIcon != ""
                source: buttonRoot.flatIcon != "" ? buttonRoot.flatIcon : ""
            }
            PropertyChanges {
                target: text
                color: buttonRoot.flatFontColor
                anchors.verticalCenterOffset: 0
                style: Text.Normal
            }
        }
    ]


    BorderImage {
        id: backgroundImage
        x: (parent.width - width)/2
        y: (parent.height - height)/2

        width: parent.width / scale
        height: parent.height / scale
        scale: parent.cornerRadius/parent.skinCornerRadius

        border.left: buttonRoot.skinCornerRadius
        border.right: buttonRoot.skinCornerRadius
        border.top: buttonRoot.skinCornerRadius
        border.bottom: buttonRoot.skinCornerRadius + buttonRoot.skinCornerBottomOffset
        horizontalTileMode: BorderImage.Stretch
        verticalTileMode: BorderImage.Stretch
        source: maButton.pressed ? buttonRoot.skin + "_down.png" : buttonRoot.skin + "_up.png"

    }

    Image {
        id: iconImage
        anchors.fill: parent
        anchors.topMargin: 6
        anchors.leftMargin: 6
        anchors.rightMargin: 6
        anchors.bottomMargin: 9

        visible: buttonRoot.icon != ""
        source: buttonRoot.icon != "" ? buttonRoot.icon : ""
    }

    Text {
        id: text
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: maButton.pressed ? 0 : parent.height / -fontPixelSize
        font.family: buttonRoot.fontFamily
        font.bold: buttonRoot.fontBold
        font.pixelSize: buttonRoot.fontPixelSize
        color: buttonRoot.fontColor
        style: Text.Sunken
    }

    MouseArea {
        id: maButton
        anchors.fill: parent
        onClicked: {
            buttonRoot.clicked()
        }
        onPressed: {
            buttonRoot.pressed()
        }
        onReleased: {
            buttonRoot.released()
        }
    }

}


