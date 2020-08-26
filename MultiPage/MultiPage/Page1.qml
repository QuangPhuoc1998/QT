import QtQuick 2.4

Page1Form
{
    dial.onValueChanged:
    {
        progressBar.value = dial.value
        label.text = Math.round(dial.value) + " year old"
    }
}
