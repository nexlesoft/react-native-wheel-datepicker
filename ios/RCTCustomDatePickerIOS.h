//
//  RCTCustomDatePickerIOS.h
//  RCTCustomDatePickerIOS
//
//  Created by Danh DC on 3/5/18.
//  Copyright © 2018 Danh DC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>
#import <React/RCTViewManager.h>

@interface RCTConvert(UIDatePicker)

+ (UIDatePickerMode)UIDatePickerMode:(id)json;

@end

@interface RCTCustomDatePickerIOS : RCTViewManager

@end
