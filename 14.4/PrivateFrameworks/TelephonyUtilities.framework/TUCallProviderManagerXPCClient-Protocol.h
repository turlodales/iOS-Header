//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSDictionary;

@protocol TUCallProviderManagerXPCClient <NSObject>
- (oneway void)updateProvidersByIdentifier:(NSDictionary *)arg1 localProvidersByIdentifier:(NSDictionary *)arg2 pairedHostDeviceProvidersByIdentifier:(NSDictionary *)arg3;
@end

