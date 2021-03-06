//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

@interface SCROBrailleDisplayAutoDetector : NSObject
{
    _Bool _isDetectingDisplays;
    struct IONotificationPort *_notificationPort;
    NSMutableDictionary *_iteratorDict;
    NSObject<OS_dispatch_source> *_serialSource;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedDetector;
- (void).cxx_destruct;
- (void)stopDetectingDisplays;
- (void)_autodetectIOServices:(id)arg1;
- (void)_detectSerialPorts:(id)arg1;
- (void)_initializeAutodetectSerialPorts:(id)arg1;
- (void)_registerForSerialPortNotifications;
- (void)serialPortsWerePublished:(unsigned int)arg1;
- (id)_serialPortMatchingDictionary;
- (_Bool)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3;
- (void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2;
- (void)detectDisplays;
- (id)_driverBundleIdentifiers;
- (_Bool)isAutoDetectEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

