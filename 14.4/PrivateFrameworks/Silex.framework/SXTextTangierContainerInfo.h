//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContainerInfo.h>

#import <Silex/SXTangierRepDirectLayerHostingInfo-Protocol.h>

@class NSSet, NSString, SXTextTangierStorage;
@protocol TSDRepDirectLayerHosting;

@interface SXTextTangierContainerInfo : TSDContainerInfo <SXTangierRepDirectLayerHostingInfo>
{
    _Bool _isSelectable;
    _Bool _shouldHyphenate;
    SXTextTangierStorage *_storage;
    NSSet *_fixedExclusionPaths;
    id <TSDRepDirectLayerHosting> _directLayerHost;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TSDRepDirectLayerHosting> directLayerHost; // @synthesize directLayerHost=_directLayerHost;
@property(nonatomic) _Bool shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSSet *fixedExclusionPaths; // @synthesize fixedExclusionPaths=_fixedExclusionPaths;
@property(readonly, nonatomic) SXTextTangierStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSSet *rangedExclusionPaths;
- (Class)repClass;
- (Class)layoutClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

