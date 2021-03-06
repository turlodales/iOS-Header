//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavSARCellSpecProvider-Protocol.h"
#import "NavSARSizeProvider-Protocol.h"

@class UIFont, UITraitCollection;

__attribute__((visibility("hidden")))
@interface NavSARSizeController : NSObject <NavSARSizeProvider, NavSARCellSpecProvider>
{
    UITraitCollection *_traitCollection;
    double _interItemSpace;
    double _lineSpacing;
    UIFont *_titleLabelFont;
    double _cellImageSize;
    double _cellContentSpacing;
    struct UIEdgeInsets _sectionInset;
}

- (void).cxx_destruct;
@property(nonatomic) double cellContentSpacing; // @synthesize cellContentSpacing=_cellContentSpacing;
@property(nonatomic) double cellImageSize; // @synthesize cellImageSize=_cellImageSize;
@property(retain, nonatomic) UIFont *titleLabelFont; // @synthesize titleLabelFont=_titleLabelFont;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double interItemSpace; // @synthesize interItemSpace=_interItemSpace;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (id)effectiveTraitCollectionUsing:(id)arg1;
- (id)titleLabelFontUsingTraitCollection:(id)arg1;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets)insetForSectionAtIndex:(long long)arg1;
- (double)maximumGroupHeightFromTitles:(id)arg1 constrainedToWidth:(double)arg2 usingTraitCollection:(id)arg3;
- (id)init;

@end

