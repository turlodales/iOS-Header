//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLScopeFilter.h>

@class NSIndexSet;
@protocol PQLInjecting;

@interface CPLPrequeliteScopeFilter : CPLScopeFilter
{
    id <PQLInjecting> _localIndexesInjection;
    NSIndexSet *_localIndexes;
    id <PQLInjecting> _cloudIndexesInjection;
    NSIndexSet *_cloudIndexes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexSet *cloudIndexes; // @synthesize cloudIndexes=_cloudIndexes;
@property(readonly, nonatomic) id <PQLInjecting> cloudIndexesInjection; // @synthesize cloudIndexesInjection=_cloudIndexesInjection;
@property(readonly, nonatomic) NSIndexSet *localIndexes; // @synthesize localIndexes=_localIndexes;
@property(readonly, nonatomic) id <PQLInjecting> localIndexesInjection; // @synthesize localIndexesInjection=_localIndexesInjection;
- (id)description;
- (id)initWithExcludedScopeIdentifiers:(id)arg1 localIndexesInjection:(id)arg2 localIndexes:(id)arg3 cloudIndexesInjection:(id)arg4 cloudIndexes:(id)arg5;
- (id)initWithIncludedScopeIdentifiers:(id)arg1 localIndexesInjection:(id)arg2 localIndexes:(id)arg3 cloudIndexesInjection:(id)arg4 cloudIndexes:(id)arg5;

@end

