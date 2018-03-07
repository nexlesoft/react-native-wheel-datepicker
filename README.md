# react-native-custom-date-picker-ios

Installation

1. In Packgage.json , add ```"react-native-custom-datepicker-ios": "git+https://github.com/nexlesoft/react-native-wheel-datepicker.git"``` into ```dependencies```

2. Run ```npm install```
3. Then link iOS dependencies:  ```react-native link react-native-custom-datepicker-ios```
4. Run your project (Cmd+R)

How to use

```
import CustomDatePickerIOS from 'react-native-custom-datepicker-ios';
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
