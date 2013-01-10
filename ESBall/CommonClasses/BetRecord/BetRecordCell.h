//
//  BetRecordCell.h
//  ESBall
//
//  Created by Nelson on 1/8/13.
//  Copyright (c) 2013 nelson. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BetRecordCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *roundSerialLabel;
@property (nonatomic, weak) IBOutlet UILabel *subDetailLabel;

-(id)initWithReuseIdentifier:(NSString *)identifier;

@end