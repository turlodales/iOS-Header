//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol CKMacToolbarViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMacToolbarView : UIView
{
    id <CKMacToolbarViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CKMacToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

