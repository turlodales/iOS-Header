//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer
{
    NSMutableSet *_dependents;
}

+ (id)sharedRemoteContainer;
+ (id)sharedLocalContainer;
- (void).cxx_destruct;
- (id)queryWithDelegate:(id)arg1;
- (void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDependent:(id)arg1;
- (void)addDependent:(id)arg1;
- (void)_processNewEditedContents:(id)arg1;
- (void)_processNewLoadedContents:(id)arg1;

@end

