//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAbstractBaseActionSetBuilder.h>

@class NSString;
@protocol HFIconDescriptor;

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder
{
    _Bool _isFavorite;
    NSString *_name;
    id <HFIconDescriptor> _iconDescriptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_deleteActionSet:(id)arg1 fromHome:(id)arg2;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateFavorite;
- (id)commitItem;
- (id)_performValidation;
- (id)deleteActionSet;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

