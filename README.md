# react-native-custom-date-picker-ios

Installation

1. In your root project, open file packgage.json and add new line ```"react-native-custom-date-picker-ios": "git+https://github.com/nexlesoft/react-native-wheel-datepicker.git"``` into ```dependencies```

2. Run ```npm install```
3. Then link iOS dependencies:  ```react-native link react-native-custom-date-picker-ios```
4. Run your project (Cmd+R)

How to use

```
import CustomDatePickerIOS from 'react-native-custom-datepicker-ios/CustomDatePickerIOS';
```

```
// ...
render() {
  return (
    <CustomDatePickerIOS
      date={this.state.currentDate}
      onDateChange={this.handleDateChange.bind(this)}
      textColor="white"
      mode={"date"}
      maximumDate={this.state.maxDate}
    />
  )
}
```
