//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIStackView;

__attribute__((visibility("hidden")))
@interface CarButtonGridView : UIView
{
    UIStackView *_buttonStack;
    NSMutableArray *_buttonArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIStackView *buttonStack; // @synthesize buttonStack=_buttonStack;
- (void)resetButtons;
- (void)addButton:(id)arg1;
@property(readonly, nonatomic) NSArray *buttons;
- (id)initWithSize:(struct CGSize)arg1;

@end

