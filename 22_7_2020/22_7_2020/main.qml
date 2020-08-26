import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs.qml 1.0
import QtQuick.Controls 2.15
import QtQuick.Controls.Material 2.4
import QtQuick.Layouts 1.3

Window
{
    visible: true
    width: 640
    height: 480
    color: "#242424"
    title: qsTr("Hello World")
    Dial {
        id: control
        x: 27
        y: 85
        width: 117
        height: 92
        stepSize: 1
        to: 100
        onValueChanged:
        {
            My_config.send_dial(control.value)
        }

        background: Rectangle {
            x: control.width / 2 - width / 2
            y: control.height / 2 - height / 2
            width: Math.max(64, Math.min(control.width, control.height))
            height: width
            color: "transparent"
            radius: width / 2
            border.color: control.pressed ? "#f08c62" : "#f08c62"
            opacity: control.enabled ? 1 : 0.3
        }

        handle: Rectangle {
            id: handleItem
            x: control.background.x + control.background.width / 2 - width / 2
            y: control.background.y + control.background.height / 2 - height / 2
            width: 16
            height: 16
            color: "#f08c62"
            radius: 8
            antialiasing: true
            opacity: control.enabled ? 1 : 0.3
            transform: [
                Translate {
                    y: -Math.min(control.background.width, control.background.height) * 0.4 + handleItem.height / 2
                },
                Rotation {
                    angle: control.angle
                    origin.x: handleItem.width / 2
                    origin.y: handleItem.height / 2
                }
            ]
        }
    }

    Dial {
        id: control1
        x: 145
        y: 85
        width: 117
        height: 92
        background: Rectangle {
            x: control1.width / 2 - width / 2
            y: control1.height / 2 - height / 2
            width: Math.max(64, Math.min(control1.width, control1.height))
            height: width
            color: "#00000000"
            radius: width / 2
            border.color: control1.pressed ? "#f08c62" : "#f08c62"
            opacity: control1.enabled ? 1 : 0.3
        }
        handle: Rectangle {
            id: handleItem1
            x: control1.background.x + control1.background.width / 2 - width / 2
            y: control1.background.y + control1.background.height / 2 - height / 2
            width: 16
            height: 16
            color: "#f08c62"
            radius: 8
            antialiasing: true
            transform: [
                Translate {
                    y: -Math.min(control1.background.width, control1.background.height) * 0.4 + handleItem1.height / 2
                },
                Rotation {
                    angle: control1.angle
                    origin.x: handleItem1.width / 2
                    origin.y: handleItem1.height / 2
                }]
            opacity: control1.enabled ? 1 : 0.3
        }
    }

    Dial {
        id: control2
        x: 27
        y: 194
        width: 117
        height: 92
        background: Rectangle {
            x: control2.width / 2 - width / 2
            y: control2.height / 2 - height / 2
            width: Math.max(64, Math.min(control2.width, control2.height))
            height: width
            color: "#00000000"
            radius: width / 2
            border.color: control2.pressed ? "#f08c62" : "#f08c62"
            opacity: control2.enabled ? 1 : 0.3
        }
        handle: Rectangle {
            id: handleItem2
            x: control2.background.x + control2.background.width / 2 - width / 2
            y: control2.background.y + control2.background.height / 2 - height / 2
            width: 16
            height: 16
            color: "#f08c62"
            radius: 8
            antialiasing: true
            transform: [
                Translate {
                    y: -Math.min(control2.background.width, control2.background.height) * 0.4 + handleItem2.height / 2
                },
                Rotation {
                    angle: control2.angle
                    origin.x: handleItem2.width / 2
                    origin.y: handleItem2.height / 2
                }]
            opacity: control2.enabled ? 1 : 0.3
        }
    }

    Dial {
    id: control3
    x: 145
    y: 194
    width: 117
    height: 92
    background: Rectangle {
        x: control3.width / 2 - width / 2
        y: control3.height / 2 - height / 2
        width: Math.max(64, Math.min(control3.width, control3.height))
        height: width
        color: "#00000000"
        radius: width / 2
        border.color: control3.pressed ? "#f08c62" : "#f08c62"
        opacity: control3.enabled ? 1 : 0.3
    }
    handle: Rectangle {
        id: handleItem3
        x: control3.background.x + control3.background.width / 2 - width / 2
        y: control3.background.y + control3.background.height / 2 - height / 2
        width: 16
        height: 16
        color: "#f08c62"
        radius: 8
        antialiasing: true
        transform: [
            Translate {
                y: -Math.min(control3.background.width, control3.background.height) * 0.4 + handleItem3.height / 2
            },
            Rotation {
                angle: control3.angle
                origin.x: handleItem3.width / 2
                origin.y: handleItem3.height / 2
            }]
        opacity: control3.enabled ? 1 : 0.3
    }
    }

Button {
    id: button
    text: qsTr("Button")

        contentItem: Text {
            text: button.text
            font: button.font
            opacity: enabled ? 1.0 : 0.3
            color: button.down ? "#17a81a" : "#21be2b"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }

        background: Rectangle {
            implicitWidth: 100
            implicitHeight: 40
            opacity: enabled ? 1 : 0.3
            border.color: button.down ? "#17a81a" : "#21be2b"
            border.width: 1
            radius: 2
        }
    onClicked:
    {
        My_config.send_button()
        My_config.send_port(txt.text);
    }
}

Connections
{
    target: My_config
    onIncreaseOne: txtCount.text = ms
}

Text {
    id: txtCount
    x: 477
    y: 99
    width: 79
    height: 36
    color: "#ffffff"
    text: "0 Hits"
    transformOrigin: Item.Center
    font.pixelSize: 30
}

Switch {
    id: switch3
    x: 353
    y: 340
    text: qsTr("Led 4")
    contentItem: Text {
        color: switch3.down ? "#ffffff" : "#ffffff"
        text: "Led 4"
        font.bold: true
        verticalAlignment: Text.AlignVCenter
        opacity: enabled ? 1.0 : 0.3
        leftPadding: switch3.indicator.width + switch3.spacing
        font.pointSize: 10
    }
    indicator: Rectangle {
        x: switch3.leftPadding
        y: parent.height / 2 - height / 2
        color: switch3.checked ? "#f08c62" : "#ffffff"
        radius: 13
        border.color: switch3.checked ? "#f08c62" : "#cccccc"
        implicitHeight: 26
        implicitWidth: 48
        Rectangle {
            x: switch3.checked ? parent.width - width : 0
            width: 26
            height: 26
            color: switch3.down ? "#cccccc" : "#ffffff"
            radius: 13
            border.color: switch3.checked ? (switch3.down ? "#17a81a" : "#21be2b") : "#999999"
        }
    }
}

Switch {
    id: switch4
    x: 353
    y: 292
    text: qsTr("Led 3")
    contentItem: Text {
        color: switch4.down ? "#ffffff" : "#ffffff"
        text: "Led 3"
        verticalAlignment: Text.AlignVCenter
        font.bold: true
        opacity: enabled ? 1.0 : 0.3
        leftPadding: switch4.indicator.width + switch4.spacing
        font.pointSize: 10
    }
    indicator: Rectangle {
        x: switch4.leftPadding
        y: parent.height / 2 - height / 2
        color: switch4.checked ? "#f08c62" : "#ffffff"
        radius: 13
        border.color: switch4.checked ? "#f08c62" : "#cccccc"
        implicitHeight: 26
        implicitWidth: 48
        Rectangle {
            x: switch4.checked ? parent.width - width : 0
            width: 26
            height: 26
            color: switch4.down ? "#cccccc" : "#ffffff"
            radius: 13
            border.color: switch4.checked ? (switch4.down ? "#17a81a" : "#21be2b") : "#999999"
        }
    }
}

Switch {
    id: switch5
    x: 353
    y: 204
    text: qsTr("Led 1")
    onClicked:
    {
        My_config.send_switch(checked)
    }
    contentItem: Text {
        color: switch5.down ? "#ffffff" : "#ffffff"
        text: "Led 1"
        verticalAlignment: Text.AlignVCenter
        font.bold: true
        opacity: enabled ? 1.0 : 0.3
        leftPadding: switch5.indicator.width + switch5.spacing
        font.pointSize: 10
    }
    indicator: Rectangle {
        x: switch5.leftPadding
        y: parent.height / 2 - height / 2
        color: switch5.checked ? "#f08c62" : "#ffffff"
        radius: 13
        border.color: switch5.checked ? "#f08c62" : "#cccccc"
        implicitHeight: 26
        implicitWidth: 48
        Rectangle {
            x: switch5.checked ? parent.width - width : 0
            width: 26
            height: 26
            color: switch5.down ? "#cccccc" : "#ffffff"
            radius: 13
            border.color: switch5.checked ? (switch5.down ? "#17a81a" : "#21be2b") : "#999999"
        }
    }
}

Switch {
    id: switch6
    x: 353
    y: 248
    text: qsTr("Led 2")
    contentItem: Text {
        color: switch6.down ? "#ffffff" : "#ffffff"
        text: "Led 2"
        verticalAlignment: Text.AlignVCenter
        font.bold: true
        opacity: enabled ? 1.0 : 0.3
        leftPadding: switch6.indicator.width + switch6.spacing
        font.pointSize: 10
    }
    indicator: Rectangle {
        x: switch6.leftPadding
        y: parent.height / 2 - height / 2
        color: switch6.checked ? "#f08c62" : "#ffffff"
        radius: 13
        border.color: switch6.checked ? "#f08c62" : "#cccccc"
        implicitHeight: 26
        implicitWidth: 48
        Rectangle {
            x: switch6.checked ? parent.width - width : 0
            width: 26
            height: 26
            color: switch6.down ? "#cccccc" : "#ffffff"
            radius: 13
            border.color: switch6.checked ? (switch6.down ? "#17a81a" : "#21be2b") : "#999999"
        }
    }
}

Slider {
    id: slide
    x: 46
    y: 340
    stepSize: 1
    to: 100
    value: 0
    onValueChanged:
    {
        My_config.send_slide(slide.value)
    }
        background: Rectangle {
            x: slide.leftPadding
            y: slide.topPadding + slide.availableHeight / 2 - height / 2
            implicitWidth: 200
            implicitHeight: 4
            width: slide.availableWidth
            height: implicitHeight
            radius: 2
            color: "#bdbebf"

            Rectangle {
                width: slide.visualPosition * parent.width
                height: parent.height
                color: "#21be2b"
                radius: 2
            }
        }

        handle: Rectangle {
            x: slide.leftPadding + slide.visualPosition * (slide.availableWidth - width)
            y: slide.topPadding + slide.availableHeight / 2 - height / 2
            implicitWidth: 26
            implicitHeight: 26
            radius: 13
            color: slide.pressed ? "#f0f0f0" : "#f6f6f6"
            border.color: "#bdbebf"
        }
}

TextField {
    id: txt
    x: 350
    y: 22
    font.bold: true
    font.pointSize: 12
    placeholderText: qsTr("Enter description")

    background: Rectangle {
        implicitWidth: 200
        implicitHeight: 40
        color: txt.enabled ? "#ffffff" : "#353637"
        border.color: txt.enabled ? "#21be2b" : "transparent"
    }
}
}
