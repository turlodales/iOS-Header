//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class SVXDeviceSetupContext;

@protocol SVXClientDeviceServicing <NSObject>
- (void)endSetup;
- (void)beginSetupWithContext:(SVXDeviceSetupContext *)arg1;
- (void)prepareForSetupWithContext:(SVXDeviceSetupContext *)arg1 completion:(void (^)(SVXDeviceSetupFlow *, NSError *))arg2;
@end

