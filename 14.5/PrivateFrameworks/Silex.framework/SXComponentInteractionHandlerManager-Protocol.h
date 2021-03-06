//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, SXComponentView;
@protocol SXComponentInteractionHandler;

@protocol SXComponentInteractionHandlerManager <NSObject>
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1 type:(unsigned long long)arg2;
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1;
- (SXComponentView *)componentViewForLocation:(struct CGPoint)arg1;
- (void)removeInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2;
- (void)addInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2 types:(unsigned long long)arg3;
@end

