//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI17ExpandingTextCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *itemInfo;
    MISSING_TYPE *linkIconsAndTitles;
    MISSING_TYPE *textLabelTruncatedLines;
    MISSING_TYPE *moreTextLabel;
    MISSING_TYPE *textLabel;
    MISSING_TYPE *sizingLabel;
    MISSING_TYPE *tapTargetView;
    MISSING_TYPE *tapGestureRecognizer;
    MISSING_TYPE *layout;
}

- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)didTapLink:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

