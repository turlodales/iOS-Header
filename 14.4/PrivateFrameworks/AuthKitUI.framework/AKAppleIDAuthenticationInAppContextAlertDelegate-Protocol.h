//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, NSError;

@protocol AKAppleIDAuthenticationInAppContextAlertDelegate <NSObject>
- (void)displayAlertForContext:(AKAppleIDAuthenticationInAppContext *)arg1 error:(NSError *)arg2 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg3;
@end

