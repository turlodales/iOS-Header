//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SAGuidanceGuideSnippet, SAGuidanceGuideUpdate, SAGuidanceSuggestedUtterances;
@protocol OS_dispatch_queue;

@interface AFUIGuideCacheManager : NSObject
{
    SAGuidanceGuideUpdate *_cachedGuideUpdate;
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
    _Bool _isCheckingGuideUpdate;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_aceObjectDictionaryAtFilepath:(id)arg1;
- (id)_cachedGuideUpdate;
- (id)_pathForCachedGuideUpdate;
- (void)_updateLastCheckedWithDate:(id)arg1;
- (_Bool)_shouldCheckForUpdateAtDate:(id)arg1 lastAppUpdateTime:(id)arg2;
- (void)checkGuideUpdate;
- (void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)arg1;
- (void)_clearCachedGuide;
- (void)updateCacheWithGuideUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLastCheckedDate;
- (_Bool)shouldCheckForUpdateWithLastAppUpdateTime:(id)arg1;
@property(readonly, nonatomic) SAGuidanceSuggestedUtterances *cachedSuggestedUtterances;
@property(readonly, nonatomic) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property(readonly, nonatomic) NSNumber *cachedGuideTag;
- (void)dealloc;
- (id)init;

@end

