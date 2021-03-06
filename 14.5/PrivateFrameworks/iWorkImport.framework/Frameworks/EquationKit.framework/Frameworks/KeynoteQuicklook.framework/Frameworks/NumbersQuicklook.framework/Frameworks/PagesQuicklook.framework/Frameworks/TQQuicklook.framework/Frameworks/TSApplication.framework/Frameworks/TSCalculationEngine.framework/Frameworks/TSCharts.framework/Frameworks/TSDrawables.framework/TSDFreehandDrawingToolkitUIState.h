//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TSUColor;

@interface TSDFreehandDrawingToolkitUIState : TSPObject
{
    unsigned long long _currentToolType;
    unsigned long long _mostRecentToolTypeToRestore;
    TSUColor *_penToolColor;
    double _penToolOpacity;
    double _penToolUnscaledWidth;
    TSUColor *_pencilToolColor;
    double _pencilToolOpacity;
    double _pencilToolUnscaledWidth;
    TSUColor *_crayonToolColor;
    double _crayonToolOpacity;
    double _crayonToolUnscaledWidth;
    TSUColor *_fillToolColor;
    double _fillToolOpacity;
    double _eraserToolScaledWidth;
    _Bool _eraserToolErasesWholeObjects;
    unsigned long long _mostRecentRestorableToolType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mostRecentRestorableToolType; // @synthesize mostRecentRestorableToolType=_mostRecentRestorableToolType;
@property(nonatomic) unsigned long long currentToolType; // @synthesize currentToolType=_currentToolType;
- (void)p_setColor:(id)arg1 forToolType:(unsigned long long)arg2;
- (void)saveToArchive:(struct FreehandDrawingToolkitUIState *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct FreehandDrawingToolkitUIState *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (void)p_setDefaultToolType:(unsigned long long)arg1;
- (unsigned long long)p_defaultToolType;
- (unsigned long long)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(unsigned long long)arg1;
- (_Bool)isEqualToFreehandDrawingToolkitUIState:(id)arg1;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)arg1;
- (double)p_defaultStrokeWidthForToolType:(unsigned long long)arg1;
- (id)p_defaultColorForToolType:(unsigned long long)arg1;
- (void)p_setupDefaultValues;
- (id)initWithContext:(id)arg1;

@end

