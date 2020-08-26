import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Timer {
            interval: 1000; running: true; repeat: true
            onTriggered: time.text = Date().toString()
        }

    Text { id: time ; x: 0; y: 0;width: 104;height: 47 ;text: "0"; font.pointSize: 20;font.family: "Times New Roman" }
}
