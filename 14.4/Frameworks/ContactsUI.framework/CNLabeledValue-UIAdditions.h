//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNLabeledValue.h>

@class NSString;

@interface CNLabeledValue (UIAdditions)
+ (id)builtinLabelsForProperty:(id)arg1;
+ (void)deleteCustomLabel:(id)arg1;
+ (id)allCustomLabels;
+ (id)allLabels;
+ (id)defaultLabels;
+ (id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2;
+ (void *)addressBook;
+ (id)builtinLabelsForProperty:(id)arg1;
+ (void)deleteCustomLabel:(id)arg1;
+ (id)allCustomLabels;
+ (id)allLabels;
+ (id)defaultLabels;
+ (id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2;
+ (void *)addressBook;
@property(readonly, nonatomic) NSString *localizedLabel;
- (Class)contactViewControllerCellClassForPropertyType:(id)arg1;
@end

