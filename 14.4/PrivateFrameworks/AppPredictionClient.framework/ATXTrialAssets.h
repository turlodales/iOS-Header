//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface ATXTrialAssets : NSObject
{
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (_Bool)_cleanModelDirectory;
- (id)_unarchiveResource:(id)arg1;
- (id)_unarchivedResourcePath;
- (id)_treatmentId;
- (void)addUpdateHandlerWithBlock:(CDUnknownBlockType)arg1;
- (id)pathForLegacyResourcePath:(id)arg1;
- (_Bool)clearStaleUnarchivedLevels;
- (id)filePathForResource:(id)arg1;
- (id)filePathForClass:(Class)arg1;
- (id)dictionaryForClass:(Class)arg1;
- (id)dictionaryForResource:(id)arg1;
- (id)client;
- (id)init;

@end

