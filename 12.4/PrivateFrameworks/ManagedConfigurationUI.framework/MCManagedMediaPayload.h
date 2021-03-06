//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

__attribute__((visibility("hidden")))
@interface MCManagedMediaPayload : MCPayload
{
    MCBook *_managedBook;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) MCBook *managedBook; // @synthesize managedBook=_managedBook;
- (void).cxx_destruct;
- (id)title;
- (id)initWithManagedMedia:(id)arg1 profile:(id)arg2;

@end

