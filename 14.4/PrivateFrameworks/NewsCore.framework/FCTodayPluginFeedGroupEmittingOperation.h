//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTodayPluginFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    long long _bridgedGroupType;
}

@property(readonly, nonatomic) long long bridgedGroupType; // @synthesize bridgedGroupType=_bridgedGroupType;
- (void)_performOperation;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 bridgedGroupType:(long long)arg5;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;

@end

