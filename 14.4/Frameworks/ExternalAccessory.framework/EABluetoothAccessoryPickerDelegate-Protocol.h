//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExternalAccessory/NSObject-Protocol.h>

@class EABluetoothAccessoryPicker, NSString;

@protocol EABluetoothAccessoryPickerDelegate <NSObject>

@optional
- (void)devicePicker:(EABluetoothAccessoryPicker *)arg1 didSelectAddress:(NSString *)arg2 errorCode:(long long)arg3;
@end

