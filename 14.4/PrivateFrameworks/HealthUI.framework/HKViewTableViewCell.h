//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell
{
    UIView *_hostedView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
- (void)_pinViewToContent:(id)arg1;
- (void)prepareForReuse;
- (void)setHostedView:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

