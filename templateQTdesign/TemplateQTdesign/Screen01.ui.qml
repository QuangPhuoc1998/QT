import QtQuick 2.15
import QtQuick.Controls 2.15
import TemplateQTdesign 1.0
import QtQuick.Extras 1.4

Rectangle {
    width: Constants.width
    height: Constants.height

    color: "#242424"

    DelayButton {
        id: delayButton
        x: 336
        y: 176

        ColorAnimation {
            from: "white"
            to: "black"
            duration: 200
        }
        text: qsTr("Button")


    }
}
