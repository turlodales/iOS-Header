//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIListLockupCollectionViewCellLayout, VUIListLockupCollectionViewCellView;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCell : VUIListCollectionViewCell
{
    CDUnknownBlockType _buttonSelectionHandler;
    IKViewElement *_viewElement;
    IKViewElement *_primaryButtonElement;
    IKViewElement *_secondaryButtonElement;
    VUIListLockupCollectionViewCellView *_listCellView;
    VUIListLockupCollectionViewCellLayout *_layout;
}

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) VUIListLockupCollectionViewCellLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) VUIListLockupCollectionViewCellView *listCellView; // @synthesize listCellView=_listCellView;
@property(retain, nonatomic) IKViewElement *secondaryButtonElement; // @synthesize secondaryButtonElement=_secondaryButtonElement;
@property(retain, nonatomic) IKViewElement *primaryButtonElement; // @synthesize primaryButtonElement=_primaryButtonElement;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(copy, nonatomic) CDUnknownBlockType buttonSelectionHandler; // @synthesize buttonSelectionHandler=_buttonSelectionHandler;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

