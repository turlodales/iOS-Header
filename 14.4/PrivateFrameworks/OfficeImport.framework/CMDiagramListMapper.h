//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramListMapper : CMDiagramShapeMapper
{
    float mMaxLineCount;
}

- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3;
- (void)setDefaultFonSize;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)textSize;
- (void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3;
- (id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1;

@end

