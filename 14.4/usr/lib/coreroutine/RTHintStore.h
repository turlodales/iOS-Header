//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTStore.h>

#import <coreroutine/RTEnumerableStore-Protocol.h>

@class NSString;

@interface RTHintStore : RTStore <RTEnumerableStore>
{
}

+ (id)fetchRequestForHintEnumerationOptions:(id)arg1 error:(id *)arg2;
+ (id)predicateForSourceFilter:(id)arg1;
+ (_Bool)batchInsertHintsDictionary:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)fetchRequestFromOptions:(id)arg1 offset:(unsigned long long)arg2 error:(id *)arg3;
- (void)fetchIsHintNearLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchHintStatsNearLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchHintStatsNearLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)purgeHintsPredating:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_purgeHintsPredating:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enumerateStoredHintsWithOptions:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_regenerateLOIHintsWithHandler:(CDUnknownBlockType)arg1;
- (void)regenerateLOIHintsWithHandler:(CDUnknownBlockType)arg1;
- (void)_clearHintsForSourceFilter:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)clearHintsForSourceFilter:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;
- (void)storeHints:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

