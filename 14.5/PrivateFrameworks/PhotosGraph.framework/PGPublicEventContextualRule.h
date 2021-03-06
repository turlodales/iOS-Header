//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGContextualRule-Protocol.h>

@class NSArray, NSString, PGGraph;

@interface PGPublicEventContextualRule : NSObject <PGContextualRule>
{
    PGGraph *_graph;
    NSArray *_publicEventNodes;
}

- (void).cxx_destruct;
- (id)highlightNodeMatchingYearHighlight:(id)arg1 withOptions:(id)arg2;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (id)initWithGraph:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

