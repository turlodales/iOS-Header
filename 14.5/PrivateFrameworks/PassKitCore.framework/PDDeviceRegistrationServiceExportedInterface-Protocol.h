//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString;

@protocol PDDeviceRegistrationServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)performDeviceRegistrationForReason:(NSString *)arg1 actionType:(long long)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
@end

