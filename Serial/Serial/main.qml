import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.2
Window {
    visible: true
    width: 1000
    height: 400
    color: "#242424"
    title: qsTr("Hello World")

    Button {
        id: button
        x: 17
        y: 130
        text: qsTr("Send")
        onClicked:
        {
            My_config.send_data(textField.text)
        }
    }

    TextField {
        id: textField
        x: 159
        y: 130
        width: 300
        height: 40
        placeholderText: qsTr("Text Field")
    }

    GroupBox {
        id: groupBox
        x: 17
        y: 21
        width: 442
        height: 83
        title: qsTr("Group Box")

        Button {
            id: btn_connect
            x: 16
            y: 0
            width: 170
            height: 40
            text: qsTr("Connect")
            onClicked:
            {
                My_config.connet()
                btn_stop.enabled = true
                enabled = false
            }
        }

        Button {
            id: btn_stop
            x: 229
            y: 0
            width: 170
            height: 40
            text: qsTr("Stop")
            enabled: false
            onClicked:
            {
                My_config.stop_connet()
                btn_connect.enabled = true
                enabled = false
            }
        }
    }
    Connections
    {
        target: My_config
        onIncreaseOne:
        {
            sp.value = ms
            progressBar.value = ms
        }
    }
    Text {
        id: txt_receive
        x: 32
        y: 200
        width: 406
        height: 68
        color: "#ffffff"
        text: qsTr("...")
        font.bold: true
        font.pixelSize: 15
    }

    Rectangle {
        id: rectangle
        x: 25
        y: 260
        width: 434
        height: 2
        color: "#ffffff"
    }

    ProgressBar {
        id: progressBar
        x: 25
        y: 343
        width: 434
        height: 11
        to: 280
        value: 0
    }
    Speed
    {
        id: sp
        x: 583
        y: 25
        width: 350
        height: 350
        value: 0
    }
}
