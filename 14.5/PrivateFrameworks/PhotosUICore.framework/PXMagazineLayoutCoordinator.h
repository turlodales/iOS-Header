//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PXMagazineRectArray;

@interface PXMagazineLayoutCoordinator : NSObject
{
    PXMagazineRectArray *_fallbackLayout;
    double _currentBestScore;
    _Bool _stopIfAnyGoodLayout;
    _Bool _stop;
    NSArray *_paddingInputs;
    double _tileAspectRatio;
    NSMutableArray *_qualifiedLayouts;
    PXMagazineRectArray *_currentLayout;
    unsigned long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool stop; // @synthesize stop=_stop;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) PXMagazineRectArray *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) NSMutableArray *qualifiedLayouts; // @synthesize qualifiedLayouts=_qualifiedLayouts;
@property(readonly, nonatomic) _Bool stopIfAnyGoodLayout; // @synthesize stopIfAnyGoodLayout=_stopIfAnyGoodLayout;
@property(readonly, nonatomic) double tileAspectRatio; // @synthesize tileAspectRatio=_tileAspectRatio;
@property(readonly, nonatomic) NSArray *paddingInputs; // @synthesize paddingInputs=_paddingInputs;
- (id)currentBestLayout;
- (unsigned long long)currentLayoutsCount;
- (double)scoreOfLayout:(id)arg1;
- (void)validateCurrentLayoutAsFallback;
- (_Bool)validateCurrentLayout;
- (id)initWithPaddingInputs:(id)arg1 tileAspectRatio:(double)arg2 stopIfAnyGoodLayout:(_Bool)arg3;

@end

