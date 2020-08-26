import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 800
    height: 480
    color: "#242424"
    title: qsTr("Hello World")
    /*---speed---*/
    Speed
    {
        id: sp
        x: 250
        y: 15

        width: 300
        height: 300
        value: sl.value
    }
    /*---slide speed---*/
    Slider {
        id: sl
        x: 300
        y: 364
        width: 200
        height: 60
        rotation: 0
        stepSize: 1
        to: 280
        value: 0
        onValueChanged:
        {
            console.debug("speed: "+value)
            sp.value = value
        }

        background: Rectangle {
            x: sl.leftPadding
            y: sl.topPadding + sl.availableHeight / 2 - height / 2
            implicitWidth: 200
            implicitHeight: 4
            width: sl.availableWidth
            height: implicitHeight
            radius: 2
            color: "#bdbebf"

            Rectangle {
                width: sl.visualPosition * parent.width
                height: parent.height
                color: "#21be2b"
                radius: 2
            }
        }

        handle: Rectangle {
            x: sl.leftPadding + sl.visualPosition * (sl.availableWidth - width)
            y: sl.topPadding + sl.availableHeight / 2 - height / 2
            color: "#21be2b"
            implicitWidth: 40
            implicitHeight: 40
            radius: 20
            border.color: "#bdbebf"
        }
    }
    /*---Fuel---*/
    Fuel
    {
        id: fu
        x: 44
        y: 120
        width: 200
        height: 200
        value: sl1.value
    }
    /*---slide Fuel---*/
    Slider {
        id: sl1
        x: 44
        y: 364
        width: 200
        height: 60
        stepSize: 1
        onValueChanged:
        {
            console.debug("Fuel: "+value)
            fu.value = value
        }
        background: Rectangle {
            x: sl1.leftPadding
            y: sl1.topPadding + sl1.availableHeight / 2 - height / 2
            width: sl1.availableWidth
            height: implicitHeight
            color: "#bdbebf"
            radius: 2
            implicitWidth: 200
            implicitHeight: 4
            Rectangle {
                width: sl1.visualPosition * parent.width
                height: parent.height
                color: "#21be2b"
                radius: 2
            }
        }
        to: 4
        rotation: 0
        value: 0
        handle: Rectangle {
            x: sl1.leftPadding + sl1.visualPosition * (sl1.availableWidth - width)
            y: sl1.topPadding + sl1.availableHeight / 2 - height / 2
            color: "#21be2b"
            radius: 20
            implicitWidth: 40
            implicitHeight: 40
            border.color: "#bdbebf"
        }
    }
    /*---Gear---*/
    Gear
    {
        id: gear
        x: 556
        y: 120
        width: 200
        height: 200
        value: spinbox.value
    }
    /*---SpinBox---*/
    SpinBox
    {
        x: 586
        y: 374
        id: spinbox
        from: 0
        to: 6
        value: 0
        editable: true
        onValueChanged:
        {
            console.debug("Gear: "+value)
            gear.value = value
        }
        contentItem: TextInput {
            z: 2
            text: spinbox.textFromValue(spinbox.value, spinbox.locale)

            font: spinbox.font
            color: "#21be2b"
            selectionColor: "#21be2b"
            selectedTextColor: "#ffffff"
            horizontalAlignment: Qt.AlignHCenter
            verticalAlignment: Qt.AlignVCenter

            readOnly: !spinbox.editable
            validator: spinbox.validator
            inputMethodHints: Qt.ImhFormattedNumbersOnly
        }

        up.indicator: Rectangle {
            x: spinbox.mirrored ? 0 : parent.width - width
            height: parent.height
            implicitWidth: 40
            implicitHeight: 40
            color: control.up.pressed ? "#e4e4e4" : "#f6f6f6"
            border.color: enabled ? "#21be2b" : "#bdbebf"

            Text {
                text: "+"
                font.pixelSize: spinbox.font.pixelSize * 2
                color: "#21be2b"
                anchors.fill: parent
                fontSizeMode: Text.Fit
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }

        down.indicator: Rectangle {
            x: spinbox.mirrored ? parent.width - width : 0
            height: parent.height
            implicitWidth: 40
            implicitHeight: 40
            color: spinbox.down.pressed ? "#e4e4e4" : "#f6f6f6"
            border.color: enabled ? "#21be2b" : "#bdbebf"

            Text {
                text: "-"
                font.pixelSize: spinbox.font.pixelSize * 2
                color: "#21be2b"
                anchors.fill: parent
                fontSizeMode: Text.Fit
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }

        background: Rectangle {
            implicitWidth: 140
            border.color: "#bdbebf"
        }
    }
}
