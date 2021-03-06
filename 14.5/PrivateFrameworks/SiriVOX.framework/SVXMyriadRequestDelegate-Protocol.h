//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFMyriadContext, AFMyriadGoodnessScoreContext;

@protocol SVXMyriadRequestDelegate <NSObject>
- (void)startAdvertising:(unsigned long long)arg1 withMyriadGoodnessScoreContext:(AFMyriadGoodnessScoreContext *)arg2 withMyriadAudioContext:(AFMyriadContext *)arg3 completion:(void (^)(SVXServiceCommandResult *))arg4;
- (void)setupEnabled:(_Bool)arg1;
- (void)resetMyriad;
- (void)preheatMyriad;

@optional
- (void)startAdvertisingEmergency;
@end

