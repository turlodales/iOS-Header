//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableLabelTypesetter-Protocol.h>

@class NSArray, NSAttributedString;

@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter>
{
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _allowTruncation;
    struct CGContext *_context;
    NSAttributedString *_attributedString;
    long long _typesettingMode;
    unsigned long long _maximumNumberOfLines;
    double _minimumScaleFactor;
    double _minimumTruncatedScaleFactor;
    NSArray *_lines;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) double minimumTruncatedScaleFactor; // @synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor;
@property(nonatomic) _Bool allowTruncation; // @synthesize allowTruncation=_allowTruncation;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
- (void)_setLines:(id)arg1;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (_Bool)_allowTextOverlapForFont:(id)arg1;
- (unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2;
- (void)_updateLines;
- (void)shiftLinesVerticallyToAvoidOverlap:(id)arg1 referenceFont:(id)arg2;
- (id)initWithContext:(struct CGContext *)arg1;
- (id)init;

@end

