//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFUserInterfaceHost-Protocol.h>

@class INIntent, INInteraction, NSArray, NSString, NSUserActivity;

@protocol WFSiriUserInterface <WFUserInterfaceHost>
@property(readonly, nonatomic) long long executionContext;
@property(readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
- (_Bool)isRunningInSiri;
- (void)configureIntent:(INIntent *)arg1;
- (_Bool)executeIntent:(INIntent *)arg1 completionHandler:(void (^)(INInteraction *, NSError *))arg2;
- (void)openUserActivity:(NSUserActivity *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)openInteractionInApp:(INInteraction *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)speakText:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

