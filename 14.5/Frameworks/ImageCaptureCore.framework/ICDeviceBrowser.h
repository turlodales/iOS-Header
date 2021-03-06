//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
    unsigned long long _browsedDeviceTypeMask;
    NSArray *_devices;
}

@property(nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property unsigned long long browsedDeviceTypeMask; // @synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask;
- (void)requestControlAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (id)controlAuthorizationStatus;
- (void)requestContentsAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (id)contentsAuthorizationStatus;
- (id)internalDevices;
@property(nonatomic, getter=isSuspended) _Bool suspended;
- (_Bool)suspended;
- (void)stop;
- (void)start;
@property(readonly, getter=isBrowsing) _Bool browsing;
@property id <ICDeviceBrowserDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

