# react-native-custom-date-picker-ios

Manual installation

1. In XCode, in the project navigator, right click Libraries ➜ Add Files to [your project's name]
2. Add RCTCustomDatePickerIOS.xcodeproj
3. In XCode, in the project navigator, select your project. Add libRCTCustomDatePickerIOS.a to your project's Build Phases ➜ Link Binary With Libraries
4. Run your project (Cmd+R)

How to use

```import CustomDatePickerIOS from 'CustomDatePickerIOS';```
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
