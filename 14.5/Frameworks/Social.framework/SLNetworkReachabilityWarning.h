//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SLNetworkReachabilityWarning : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSString *_serviceType;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)showIfNecessary;
- (id)initWithServiceType:(id)arg1;

@end

