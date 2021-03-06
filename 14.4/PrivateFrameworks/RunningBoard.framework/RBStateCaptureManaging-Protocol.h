//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSSet, NSString;
@protocol RBStateCapturing;

@protocol RBStateCaptureManaging <NSObject>
- (NSSet *)identifiers;
- (void)addItem:(id <RBStateCapturing>)arg1;
- (void)removeItem:(id <RBStateCapturing>)arg1;
- (void)addItem:(id <RBStateCapturing>)arg1 withIdentifier:(NSString *)arg2;
- (void)removeItemWithIdentifier:(NSString *)arg1;
- (void)addItemWithTitle:(NSString *)arg1 identifier:(NSString *)arg2 block:(id (^)(void))arg3;
- (NSString *)stateForSubsystem:(NSString *)arg1;
@end

