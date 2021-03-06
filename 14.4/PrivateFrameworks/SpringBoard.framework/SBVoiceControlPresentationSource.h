//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BluetoothDevice;

@interface SBVoiceControlPresentationSource : NSObject
{
    BluetoothDevice *_bluetoothDevice;
    long long _sourceType;
}

+ (id)sourceFromHomeButton;
+ (id)sourceFromHeadsetButton;
+ (id)sourceFromBluetoothDevice:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) BluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (id)_initWithSourceType:(long long)arg1;

@end

