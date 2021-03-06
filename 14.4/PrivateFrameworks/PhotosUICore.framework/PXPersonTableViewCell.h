//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView;

@interface PXPersonTableViewCell : UITableViewCell
{
    _Bool _useImageSize;
    UIImage *_personIcon;
    NSString *_personFirstName;
    NSString *_personLastName;
    UIImageView *__personIconImageView;
    UIImage *__personMonogramImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setPersonMonogramImage:) UIImage *_personMonogramImage; // @synthesize _personMonogramImage=__personMonogramImage;
@property(retain, nonatomic, setter=_setPersonIconImageView:) UIImageView *_personIconImageView; // @synthesize _personIconImageView=__personIconImageView;
@property(nonatomic) _Bool useImageSize; // @synthesize useImageSize=_useImageSize;
@property(copy, nonatomic) NSString *personLastName; // @synthesize personLastName=_personLastName;
@property(copy, nonatomic) NSString *personFirstName; // @synthesize personFirstName=_personFirstName;
@property(retain, nonatomic) UIImage *personIcon; // @synthesize personIcon=_personIcon;
- (void)_updatePersonIconImageView;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

