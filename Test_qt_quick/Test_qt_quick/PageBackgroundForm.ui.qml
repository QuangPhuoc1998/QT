import QtQuick 2.4
import QtSensors 5.9
import QtQuick.Controls 2.15

Item {
    width: 400
    height: 400
    transformOrigin: Item.Center
    Text {
        id: element
        x: 8
        y: 8
        width: 143
        height: 25
        color: "#0000ff"
        text: qsTr("Hello PHUOC")
        font.weight: Font.Thin
        font.pixelSize: 20
        font.family: "Courier"
        visible: true
    }

    DelayButton {
        id: delayButton
        x: 40
        y: 104
        text: qsTr("Delay Button")
    }

    Dial {
        id: dial
        x: 171
        y: 92
    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:1.75}
}
##^##*/
