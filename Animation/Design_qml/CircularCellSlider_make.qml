import QtQuick 2.0

Item {
    id: objRoot
    width: 320
    height: 264
    implicitWidth: 320
    implicitHeight: 264

    property int value: 1
    property string skin: "ccslider" // Format: <path.to/skin>_variant.png  Ex: "images/cellslider" means "images/cellslider_btnDwn_on.png" etc. is used.
    property bool interactive: true
    property bool asynchronous: false

    state: ""
    states: [
        State {
            name: "FLAT"
            PropertyChanges { target: backPlate; visible: false }
        }
    ]

    onValueChanged: value = Math.min(Math.max(value,1),6)

    Rectangle {
        id: fitFrame
        property real aspect: 1.16
        width: parent.width < aspect * parent.height ? parent.width : height * aspect
        height: parent.width < aspect * parent.height ? width / aspect : parent.height
        anchors.centerIn: parent

        color: "transparent"

        Image {
            id: backPlate
            anchors.fill: parent

            source: "ccslider_bg.png"
            sourceSize.width: width
            sourceSize.height: height

            asynchronous: objRoot.asynchronous
        }


        property int cellRadius: 0.44*height
        property int flatOR: 0.51*height
        property int flatIR: 0.32*height
        property int cellWidth: 5.4 / 16 * fitFrame.width  // 5.2
        property int cellHeight: 3.4 / 16 * fitFrame.width  // 3.2

        Item {
            anchors.horizontalCenter: parent.horizontalCenter
            y: 0.57 * parent.height
            Item {
                anchors.centerIn: parent
                rotation: -135 +22.5

                CircularCellSliderCell {
                    id: cell1
                    anchors.centerIn: parent
                    anchors.verticalCenterOffset: -fitFrame.cellRadius
                    width: fitFrame.cellWidth
                    height: fitFrame.cellHeight
                    lit: objRoot.value > 0
                    state: objRoot.state
                    skin: objRoot.skin
                    outerRadius: fitFrame.flatOR
                    innerRadius: fitFrame.flatIR
                    isButton: objRoot.interactive
                    onClicked: objRoot.value = 1

                    asynchronous: objRoot.asynchronous
                }
            }

            Item {
                anchors.centerIn: parent
                rotation: -90 +22.5

                CircularCellSliderCell {
                    id: cell2
                    anchors.centerIn: parent
                    anchors.verticalCenterOffset: -fitFrame.cellRadius
                    width: fitFrame.cellWidth
                    height: fitFrame.cellHeight
                    lit: objRoot.value > 1
                    state: objRoot.state
                    skin: objRoot.skin
                    outerRadius: fitFrame.flatOR
                    innerRadius: fitFrame.flatIR
                    isButton: objRoot.interactive
                    onClicked: objRoot.value = 2

                    asynchronous: objRoot.asynchronous
                }
            }

            Item {
                anchors.centerIn: parent
                rotation: -45 +22.5

                CircularCellSliderCell {
                    id: cell3
                    anchors.centerIn: parent
                    anchors.verticalCenterOffset: -fitFrame.cellRadius
                    width: fitFrame.cellWidth
                    height: fitFrame.cellHeight
                    lit: objRoot.value > 2
                    state: objRoot.state
                    skin: objRoot.skin
                    outerRadius: fitFrame.flatOR
                    innerRadius: fitFrame.flatIR
                    isButton: objRoot.interactive
                    onClicked: objRoot.value = 3

                    asynchronous: objRoot.asynchronous
                }
            }

            Item {
                anchors.centerIn: parent
                rotation: 0 +22.5

                CircularCellSliderCell {
                    id: cell4
                    anchors.centerIn: parent
                    anchors.verticalCenterOffset: -fitFrame.cellRadius
                    width: fitFrame.cellWidth
                    height: fitFrame.cellHeight
                    lit: objRoot.value > 3
                    state: objRoot.state
                    skin: objRoot.skin
                    outerRadius: fitFrame.flatOR
                    innerRadius: fitFrame.flatIR
                    isButton: objRoot.interactive
                    onClicked: objRoot.value = 4

                    asynchronous: objRoot.asynchronous
                }
            }

            Item {
                anchors.centerIn: parent
                rotation: 45 +22.5

                CircularCellSliderCell {
                    id: cell5
                    anchors.centerIn: parent
                    anchors.verticalCenterOffset: -fitFrame.cellRadius
                    width: fitFrame.cellWidth
                    height: fitFrame.cellHeight
                    lit: objRoot.value > 4
                    state: objRoot.state
                    skin: objRoot.skin
                    outerRadius: fitFrame.flatOR
                    innerRadius: fitFrame.flatIR
                    isButton: objRoot.interactive
                    onClicked: objRoot.value = 5

                    asynchronous: objRoot.asynchronous
                }
            }

            Item {
                anchors.centerIn: parent
                rotation: 90 +22.5

                CircularCellSliderCell {
                    id: cell6
                    anchors.centerIn: parent
                    anchors.verticalCenterOffset: -fitFrame.cellRadius
                    width: fitFrame.cellWidth
                    height: fitFrame.cellHeight
                    lit: objRoot.value > 5
                    state: objRoot.state
                    skin: objRoot.skin
                    outerRadius: fitFrame.flatOR
                    innerRadius: fitFrame.flatIR
                    isButton: objRoot.interactive
                    onClicked: objRoot.value = 6

                    asynchronous: objRoot.asynchronous
                }
            }
        }
    }
}

