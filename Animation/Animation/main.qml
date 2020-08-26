import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 800
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: box
        x: 0
        y: 0
        width: 80
        height: 80
        color: "#242424"
        MouseArea {
              anchors.fill: parent
              acceptedButtons: Qt.LeftButton | Qt.RightButton
              onClicked: {
                  if (mouse.button == Qt.RightButton)
                      parent.color = 'blue';
                  else
                      parent.color = 'red';
              }
          }
    }
    Button {
        id: button
        x: -101
        y: 178
        text: qsTr("CLICK ME")
        background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 40
                    color: button.down ? "#d6d6d6" : "#f6f6f6"
                    border.color: "#26282a"
                    border.width: 1
                    radius: height*0.5
                }
        NumberAnimation on x
        {
            id: btn_animation_1
            running: false
            to: 100
            duration: 500
            loops: Animation.Infinite
        }
    }

    Button {
        id: button1
        x: -101
        y: 241
        text: qsTr("Button")
        NumberAnimation on x
        {
            id: btn_animation_2
            running: false
            to: 100
            duration: 600
            loops: Animation.Infinite
        }
    }

    Button {
        id: button2
        x: -101
        y: 307
        text: qsTr("Button")
        NumberAnimation on x
        {
            id: btn_animation_3
            running: false
            to: 100
            duration: 700
            loops: Animation.Infinite
        }
    }

    Button {
        id: button3
        x: 458
        y: 230
        text: qsTr("here")
        onClicked:
        {
            btn_animation_1.start()
            btn_animation_2.start()
            btn_animation_3.start()
        }
    }
    Canvas {
        id: mycanvas
        x: 487
        y: 18
        width: 280
        height: 200
        onPaint: {
            var ctx = getContext("2d");
            ctx.fillStyle = Qt.rgba(1, 0, 0, 1);
            ctx.fillRect(0, 0, width, height);
        }
    }

}
