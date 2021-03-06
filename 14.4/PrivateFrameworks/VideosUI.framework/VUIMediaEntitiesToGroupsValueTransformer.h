//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer
{
    _Bool _performDefaultSort;
    NSString *_identifierKeyPath;
    NSString *_sortIndexKeyPath;
    CDUnknownBlockType _groupsSortComparator;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool performDefaultSort; // @synthesize performDefaultSort=_performDefaultSort;
@property(copy, nonatomic) CDUnknownBlockType groupsSortComparator; // @synthesize groupsSortComparator=_groupsSortComparator;
@property(copy, nonatomic) NSString *sortIndexKeyPath; // @synthesize sortIndexKeyPath=_sortIndexKeyPath;
@property(copy, nonatomic) NSString *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
- (id)transformedValue:(id)arg1;
- (id)initWithIdentifierKeyPath:(id)arg1;
- (id)init;

@end

