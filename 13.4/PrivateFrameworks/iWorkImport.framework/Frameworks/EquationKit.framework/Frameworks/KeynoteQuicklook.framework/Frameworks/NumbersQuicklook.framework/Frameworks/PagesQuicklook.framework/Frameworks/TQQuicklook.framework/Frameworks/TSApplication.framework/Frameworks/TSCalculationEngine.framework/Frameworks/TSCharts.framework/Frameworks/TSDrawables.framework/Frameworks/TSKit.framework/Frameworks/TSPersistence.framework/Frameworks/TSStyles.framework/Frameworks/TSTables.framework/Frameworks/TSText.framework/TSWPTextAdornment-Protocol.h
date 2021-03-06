//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSText/NSObject-Protocol.h>

@class TSURectList;
@protocol TSWPTextAdornmentRenderer;

@protocol TSWPTextAdornment <NSObject>
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect glyphBounds;
@property(readonly, nonatomic) struct CGRect erasableBounds;
@property(readonly, nonatomic) _Bool suppressLineFragmentTextRendering;
@property(readonly, nonatomic) struct CGRect trailingCaretBounds;
- (void)offsetBy:(struct CGSize)arg1;
- (id <TSWPTextAdornmentRenderer>)adornmentRenderer;
- (TSURectList *)splitLine:(struct CGRect)arg1 skipHint:(out double *)arg2;
@end

