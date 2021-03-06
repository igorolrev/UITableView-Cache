//
// Created by Maxim Gubin on 18/06/16.
// Copyright (c) 2016 Kilograpp. All rights reserved.
//

#import <UIKit/UITableView.h>

NS_ASSUME_NONNULL_BEGIN
@interface UITableView (Cache)
- (void)registerClass:(Class)cellClass forCellReuseIdentifier:(NSString*)identifier cacheSize:(NSUInteger)size;
- (void)registerNib:(UINib*)nib forCellReuseIdentifier:(NSString*)identifier cacheSize:(NSUInteger)size;
@end
NS_ASSUME_NONNULL_END