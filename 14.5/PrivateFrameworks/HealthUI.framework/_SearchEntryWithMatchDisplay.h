//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@class NSString, UILabel;

@interface _SearchEntryWithMatchDisplay : UISearchBar
{
    NSString *_matchDisplayString;
    UILabel *_matchDisplayLabel;
}

- (void).cxx_destruct;
@property(readonly) UILabel *matchDisplayLabel; // @synthesize matchDisplayLabel=_matchDisplayLabel;
@property(retain, nonatomic) NSString *matchDisplayString; // @synthesize matchDisplayString=_matchDisplayString;
- (void)layoutSubviews;
- (void)matchDisplayVisible:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_createMatchDisplayLabel;

@end

