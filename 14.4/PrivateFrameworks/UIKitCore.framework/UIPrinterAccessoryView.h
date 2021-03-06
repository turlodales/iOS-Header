//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIButton;
@protocol UIPrinterAccessoryViewDelegate;

__attribute__((visibility("hidden")))
@interface UIPrinterAccessoryView : UIView
{
    int _printerState;
    UIButton *_infoButton;
    UIView *_statusView;
    id <UIPrinterAccessoryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int printerState; // @synthesize printerState=_printerState;
@property(nonatomic) __weak id <UIPrinterAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)infoButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

